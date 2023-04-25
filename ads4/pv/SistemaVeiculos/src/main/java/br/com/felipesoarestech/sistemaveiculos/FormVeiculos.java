package br.com.felipesoarestech.sistemaveiculos;

import br.com.felipesoarestech.sistemaveiculos.ficharios.FicharioVeiculo;
import br.com.felipesoarestech.sistemaveiculos.model.Veiculo;
import javax.swing.JOptionPane;

public class FormVeiculos extends javax.swing.JFrame {

    private FicharioVeiculo ficharioVeiculo;

    public FormVeiculos() {
        initComponents();
        this.ficharioVeiculo = new FicharioVeiculo();
        this.tfPlaca.setToolTipText("Digite a placa");
   
       
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jTabbedPane1 = new javax.swing.JTabbedPane();
        pCreate = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        tfPlaca = new javax.swing.JTextField();
        jLabel5 = new javax.swing.JLabel();
        tfAno = new javax.swing.JTextField();
        jLabel6 = new javax.swing.JLabel();
        tfModelo = new javax.swing.JTextField();
        jLabel7 = new javax.swing.JLabel();
        tfCor = new javax.swing.JTextField();
        jLabel8 = new javax.swing.JLabel();
        tfValor = new javax.swing.JTextField();
        btnCreate = new javax.swing.JButton();
        pRead = new javax.swing.JPanel();
        jLabel2 = new javax.swing.JLabel();
        cbVeiculos = new javax.swing.JComboBox<>();
        btnRead = new javax.swing.JButton();
        pUpdate = new javax.swing.JPanel();
        pDelte = new javax.swing.JPanel();
        jLabel4 = new javax.swing.JLabel();
        jPanel1 = new javax.swing.JPanel();
        jButton1 = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("Placa");

        jLabel5.setText("Ano");
        jLabel5.setToolTipText("");

        jLabel6.setText("Modelo");

        jLabel7.setText("Cor");

        jLabel8.setText("Valor:");
        jLabel8.setToolTipText("");

        btnCreate.setText("Create");
        btnCreate.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCreateActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout pCreateLayout = new javax.swing.GroupLayout(pCreate);
        pCreate.setLayout(pCreateLayout);
        pCreateLayout.setHorizontalGroup(
            pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pCreateLayout.createSequentialGroup()
                .addGap(163, 163, 163)
                .addGroup(pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(pCreateLayout.createSequentialGroup()
                        .addGroup(pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 84, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(tfPlaca, javax.swing.GroupLayout.PREFERRED_SIZE, 78, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addGroup(pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jLabel7, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addGroup(pCreateLayout.createSequentialGroup()
                                .addComponent(tfCor, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(2, 2, 2)))
                        .addContainerGap(182, Short.MAX_VALUE))
                    .addGroup(pCreateLayout.createSequentialGroup()
                        .addGroup(pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(tfModelo)
                            .addComponent(jLabel6, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addGroup(pCreateLayout.createSequentialGroup()
                                .addGroup(pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                    .addComponent(jLabel5, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(tfAno, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.PREFERRED_SIZE, 78, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addGroup(pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(jLabel8, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(tfValor, javax.swing.GroupLayout.PREFERRED_SIZE, 78, javax.swing.GroupLayout.PREFERRED_SIZE)))
                            .addComponent(btnCreate, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 184, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(35, 184, Short.MAX_VALUE))))
        );
        pCreateLayout.setVerticalGroup(
            pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pCreateLayout.createSequentialGroup()
                .addGap(93, 93, 93)
                .addGroup(pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel1)
                    .addGroup(pCreateLayout.createSequentialGroup()
                        .addComponent(jLabel7)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(tfCor, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(tfPlaca, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jLabel6)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(tfModelo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(pCreateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(pCreateLayout.createSequentialGroup()
                        .addComponent(jLabel5)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(tfAno, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(pCreateLayout.createSequentialGroup()
                        .addComponent(jLabel8)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(tfValor, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(18, 18, 18)
                .addComponent(btnCreate)
                .addContainerGap(133, Short.MAX_VALUE))
        );

        jTabbedPane1.addTab("Create", pCreate);

        jLabel2.setText("Veículos:");

        btnRead.setText("Read");
        btnRead.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnReadActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout pReadLayout = new javax.swing.GroupLayout(pRead);
        pRead.setLayout(pReadLayout);
        pReadLayout.setHorizontalGroup(
            pReadLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pReadLayout.createSequentialGroup()
                .addGap(172, 172, 172)
                .addGroup(pReadLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(cbVeiculos, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(jLabel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(btnRead, javax.swing.GroupLayout.DEFAULT_SIZE, 167, Short.MAX_VALUE))
                .addContainerGap(192, Short.MAX_VALUE))
        );
        pReadLayout.setVerticalGroup(
            pReadLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pReadLayout.createSequentialGroup()
                .addGap(128, 128, 128)
                .addComponent(jLabel2)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(cbVeiculos, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(btnRead)
                .addContainerGap(206, Short.MAX_VALUE))
        );

        jTabbedPane1.addTab("Read", pRead);

        javax.swing.GroupLayout pUpdateLayout = new javax.swing.GroupLayout(pUpdate);
        pUpdate.setLayout(pUpdateLayout);
        pUpdateLayout.setHorizontalGroup(
            pUpdateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 531, Short.MAX_VALUE)
        );
        pUpdateLayout.setVerticalGroup(
            pUpdateLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 426, Short.MAX_VALUE)
        );

        jTabbedPane1.addTab("Update", pUpdate);

        jLabel4.setText("jLabel4");

        javax.swing.GroupLayout pDelteLayout = new javax.swing.GroupLayout(pDelte);
        pDelte.setLayout(pDelteLayout);
        pDelteLayout.setHorizontalGroup(
            pDelteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pDelteLayout.createSequentialGroup()
                .addGap(161, 161, 161)
                .addComponent(jLabel4)
                .addContainerGap(329, Short.MAX_VALUE))
        );
        pDelteLayout.setVerticalGroup(
            pDelteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pDelteLayout.createSequentialGroup()
                .addGap(213, 213, 213)
                .addComponent(jLabel4)
                .addContainerGap(197, Short.MAX_VALUE))
        );

        jTabbedPane1.addTab("Delete", pDelte);

        jButton1.setText("Imprimir");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(208, 208, 208)
                .addComponent(jButton1)
                .addContainerGap(245, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap(213, Short.MAX_VALUE)
                .addComponent(jButton1)
                .addGap(181, 181, 181))
        );

        jTabbedPane1.addTab("Rel", jPanel1);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jTabbedPane1)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jTabbedPane1)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnCreateActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCreateActionPerformed
        String placa = tfPlaca.getText();
        String cor = tfCor.getText();
        String modelo = tfModelo.getText();
        String ano = tfAno.getText();
        String valor = tfValor.getText();
        Double.parseDouble("");
        System.out.printf(placa, cor, modelo, ano, cor);

            Veiculo veiculo = new Veiculo(placa, cor, modelo, Integer.parseInt(ano), Double.parseDouble(valor));
            if (ficharioVeiculo.cadastrar(veiculo)) {
                JOptionPane.showMessageDialog(this, "Veículo cadastrado com sucesso!",
                        "Sucesso!", 1);
                cbVeiculos.addItem("PLACA: " + veiculo.getPlaca().toUpperCase());
                tfPlaca.setText("");
                tfCor.setText("");
                tfModelo.setText("");
                tfAno.setText("");
                tfValor.setText("");
                return;
            }
    }//GEN-LAST:event_btnCreateActionPerformed

    private void btnReadActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnReadActionPerformed

        String[] object = cbVeiculos.getSelectedItem().toString().split(":");
        String placa = object[1];
        JOptionPane.showMessageDialog(this, this.ficharioVeiculo.consultar(placa), "Consulta de Veículos!!", JOptionPane.PLAIN_MESSAGE);
        JOptionPane.showInputDialog(rootPane, pCreate, placa, HEIGHT);
        
    }//GEN-LAST:event_btnReadActionPerformed

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        for (int i = 0; i < ficharioVeiculo.getVeiculos().size(); i++) {
            JOptionPane.showMessageDialog(this, ficharioVeiculo.getVeiculos().get(i).getPlaca(),"Relatorio Veiculos",JOptionPane.INFORMATION_MESSAGE);
        }
    }//GEN-LAST:event_jButton1ActionPerformed

    public static void main(String args[]) {

        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(FormVeiculos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(FormVeiculos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(FormVeiculos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(FormVeiculos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FormVeiculos().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnCreate;
    private javax.swing.JButton btnRead;
    private javax.swing.JComboBox<String> cbVeiculos;
    private javax.swing.JButton jButton1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JTabbedPane jTabbedPane1;
    private javax.swing.JPanel pCreate;
    private javax.swing.JPanel pDelte;
    private javax.swing.JPanel pRead;
    private javax.swing.JPanel pUpdate;
    private javax.swing.JTextField tfAno;
    private javax.swing.JTextField tfCor;
    private javax.swing.JTextField tfModelo;
    private javax.swing.JTextField tfPlaca;
    private javax.swing.JTextField tfValor;
    // End of variables declaration//GEN-END:variables
}
