package br.com.felipesoarestech.sistemacadastros.entity;

import java.io.Serializable;
import java.time.LocalDate;
import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(onlyExplicitlyIncluded = true)
public class Cliente implements Serializable {
    @EqualsAndHashCode.Include
    private Long id;
    private String nome;
    private String cpf;
    private String email;
    private LocalDate dataNascimento;
}
